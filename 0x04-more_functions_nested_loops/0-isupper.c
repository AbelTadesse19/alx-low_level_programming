#include "main.h"                                                                                                   
                                                                                                                    
/**                                                                                                                 
 *  *  _isupper -  checks if a character is uppercase                                                                  
 *   *  @c: variable text                                                                                               
 *    *  return: Always 0                                                                                                
 *     */                                                                                                                 
int _isuppper(int c)                                                                                                
{                                                                                                                   
	        if (c >= 'A' && c <= 'Z')                                                                                   
			        {                                                                                                           
					                return (1);                                                                                         
							        }                                                                                                           
		        else                                                                                                        
				        {                                                                                                           
						                return (0);                                                                                         
								        }                                                                                                           
}
