

class CalcoloDate:

    def __init__(self, data_partenza, data_ritorno):

        self.start_date = data_partenza
        self.end_date = data_ritorno 

    def computation(self):

        lista_giorni = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

        calcolo_giorni = 0
        calcolo_mesi = 0
        i = 0

        if(self.start_date[0] == self.end_date[0] and self.start_date[1] == self.end_date[1] and self.start_date[2] == self.end_date[2]):
            return 1
        
        elif(self.start_date[1] == self.end_date[1] and self.start_date[2] == self.end_date[2]):
            return self.end_date[0] - self.start_date[0]

        elif(self.start_date[2] == self.end_date[2]): 
            for i in range(0, len(lista_giorni), 1):
                if(i == self.start_date[1]):
                    calcolo_giorni += lista_giorni[i] - self.start_date[0]
                    calcolo_mesi += 1
                elif(i > self.start_date[1] and i < self.end_date[1]):
                    calcolo_giorni += lista_giorni[i]
                    calcolo_mesi += 1
                elif(i == self.end_date[1]):
                    calcolo_giorni += self.end_date[0]
                    calcolo_mesi += 1

        else:
            number_repetition = self.end_date[2] - self.start_date[2]
            counter = 0
            flag = 0
            index = self.start_date[1]
            calcolo_giorni += lista_giorni[index] - self.start_date[0]
            index = self.start_date[1] + 1
            calcolo_mesi += 1
            while(flag == 0):
                if(index == 11):
                    calcolo_giorni += lista_giorni[index]
                    calcolo_mesi += 1
                    index = 0
                    counter += 1
                else:
                    if(index == self.end_date[1] and counter == number_repetition):
                        calcolo_giorni += self.end_date[0]
                        flag = 1
                    else:
                        calcolo_giorni += lista_giorni[index]
                        calcolo_mesi += 1
                        index += 1                

        wrapper = [calcolo_giorni, calcolo_mesi]
        return wrapper

myobj = CalcoloDate([10, 2, 2000], [15, 4, 2002])

final_comput = myobj.computation()

print(final_comput)