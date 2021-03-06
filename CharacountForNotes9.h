@interface NoteObject : NSObject
@property (readonly, nonatomic) NSString *contentAsPlainText; 
@end

@interface NoteTextView : UIView
@property (copy, nonatomic) NSString *text; 
@end

@interface NoteContentLayer : UIView
@property (retain, nonatomic) NoteTextView *textView;
@end

@interface NotesDisplayController : UIViewController 
@property (retain, nonatomic) NoteContentLayer *contentLayer; 
@property (retain, nonatomic) NoteObject *note;
@end