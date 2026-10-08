// /Game/BP/Tools/CheatFunctions/CF_WeatherEvent.CF_WeatherEvent_C
// Derives from: UCF_BaseCombo2_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x308, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_WeatherEvent_C : public UCF_BaseCombo2_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0300, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_CF_WeatherEvent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleExecute(UUserWidget* Widget1, UUserWidget* Widget2);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnConstruction();
};
