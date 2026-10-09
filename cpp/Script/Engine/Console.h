// /Script/Engine.Console
// Derives from: UObject
// size 0x130, declared in Engine/Source/Runtime/Engine/Classes/Engine/Console.h

UCLASS(Transient, Config=Input)
class UConsole : public UObject
{
public:
    UPROPERTY() ULocalPlayer* ConsoleTargetPlayer;  // 0x0038, size 0x8
    UPROPERTY() UTexture2D* DefaultTexture_Black;  // 0x0040, size 0x8
    UPROPERTY() UTexture2D* DefaultTexture_White;  // 0x0048, size 0x8
    TArray<FString,TSizedDefaultAllocator<32> > Scrollback;  // 0x0050, not reflected
    int32 SBHead;  // 0x0060, not reflected
    int32 SBPos;  // 0x0064, not reflected
    UPROPERTY(Config) TArray<FString> HistoryBuffer;  // 0x0068, size 0x10
    FString TypedStr;  // 0x0078, not reflected
    int32 TypedStrPos;  // 0x0088, not reflected
    FString PrecompletedInputLine;  // 0x0090, not reflected
    FString LastAutoCompletedCommand;  // 0x00A0, not reflected
    uint32 : 1 bCaptureKeyInput;  // 0x00B0, not reflected
    uint32 : 1 bCtrl;  // 0x00B0, not reflected
    uint32 : 1 bShift;  // 0x00B0, not reflected
    TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32> > AutoCompleteList;  // 0x00B8, not reflected
    uint32 : 1 bAutoCompleteLocked;  // 0x00C8, not reflected
    int32 AutoCompleteIndex;  // 0x00CC, not reflected
    int32 AutoCompleteCursor;  // 0x00D0, not reflected
    uint32 : 1 bIsRuntimeAutoCompleteUpToDate;  // 0x00D4, not reflected
    FName ConsoleState;  // 0x00D8, not reflected
    FAutoCompleteNode AutoCompleteTree;  // 0x00E0, not reflected
    TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32> > AutoComplete;  // 0x0108, not reflected
private:
    const UConsoleSettings * ConsoleSettings;  // 0x0118, not reflected
    TWeakPtr<SWidget,0> PreviousFocusedWidget;  // 0x0120, not reflected

    // Virtual functions that start here:
    //   AppendInputText, AugmentRuntimeAutoCompleteList, BeginState_Open, BeginState_Typing
    //   BuildRuntimeAutoCompleteList, ClearOutput, ConsoleActive, ConsoleCommand, EndState_Open
    //   EndState_Typing, FakeGotoState, FlushPlayerInput, InputAxis, InputChar, InputChar_Open
    //   InputChar_Typing, InputKey, InputKey_Open, InputTouch, OutputText, PostRender_Console
    //   PostRender_Console_Open, PostRender_Console_Typing, ProcessControlKey, ProcessShiftKey
    //   SetCursorPos, SetInputText, StartTyping, UpdateCompleteIndices
};
