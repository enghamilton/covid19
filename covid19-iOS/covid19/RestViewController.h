//
//  RestViewController.h
//  covid19
//
//  Created by macOS on 25/03/20.
//  Copyright © 2020 macOS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RestViewController : UIViewController<NSURLSessionTaskDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textFieldPaciente;
@property (weak, nonatomic) IBOutlet UITextField *textFieldSintomas;

-(void)loadPHPMySQL;
-(void)insertPHPMySQL;

@end
