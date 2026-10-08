// /Game/BP/Tools/CheatFunctions/CF_OpenAtmosphereDebugger.CF_OpenAtmosphereDebugger_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_OpenAtmosphereDebugger_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UUserWidget> AtmosphereDebuggerWidgetClass;  // 0x02F8, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_OpenAtmosphereDebugger(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_45FB73724725AF1543AEB1BD3A7DDDA1(TSubclassOf<UObject> Loaded);  // parameters 0x8
};
