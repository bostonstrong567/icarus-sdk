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
    UPROPERTY(Config) TArray<FString> HistoryBuffer;  // 0x0068, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<FString,TSizedDefaultAllocator<32> > Scrollback;  // 0x0050
    int32 SBHead;  // 0x0060
    int32 SBPos;  // 0x0064
    FString TypedStr;  // 0x0078
    int32 TypedStrPos;  // 0x0088
    FString PrecompletedInputLine;  // 0x0090
    FString LastAutoCompletedCommand;  // 0x00A0
    uint32 : 1 bCaptureKeyInput;  // 0x00B0
    uint32 : 1 bCtrl;  // 0x00B0
    uint32 : 1 bShift;  // 0x00B0
    TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32> > AutoCompleteList;  // 0x00B8
    uint32 : 1 bAutoCompleteLocked;  // 0x00C8
    int32 AutoCompleteIndex;  // 0x00CC
    int32 AutoCompleteCursor;  // 0x00D0
    uint32 : 1 bIsRuntimeAutoCompleteUpToDate;  // 0x00D4
    FName ConsoleState;  // 0x00D8
    FAutoCompleteNode AutoCompleteTree;  // 0x00E0
    TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32> > AutoComplete;  // 0x0108
    const UConsoleSettings * ConsoleSettings;  // 0x0118, private
    TWeakPtr<SWidget,0> PreviousFocusedWidget;  // 0x0120, private

    // Virtual functions that start here:
    //   AppendInputText, AugmentRuntimeAutoCompleteList, BeginState_Open, BeginState_Typing
    //   BuildRuntimeAutoCompleteList, ClearOutput, ConsoleActive, ConsoleCommand, EndState_Open
    //   EndState_Typing, FakeGotoState, FlushPlayerInput, InputAxis, InputChar, InputChar_Open
    //   InputChar_Typing, InputKey, InputKey_Open, InputTouch, OutputText, PostRender_Console
    //   PostRender_Console_Open, PostRender_Console_Typing, ProcessControlKey, ProcessShiftKey
    //   SetCursorPos, SetInputText, StartTyping, UpdateCompleteIndices
};
