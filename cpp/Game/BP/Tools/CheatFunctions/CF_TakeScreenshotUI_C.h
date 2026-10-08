// /Game/BP/Tools/CheatFunctions/CF_TakeScreenshotUI.CF_TakeScreenshotUI_C
// Derives from: UCF_BaseString_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x300, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_TakeScreenshotUI_C : public UCF_BaseString_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_TakeScreenshotUI(int32 EntryPoint);  // parameters 0x4
};
