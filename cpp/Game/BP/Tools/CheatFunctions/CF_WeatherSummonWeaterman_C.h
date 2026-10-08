// /Game/BP/Tools/CheatFunctions/CF_WeatherSummonWeaterman.CF_WeatherSummonWeaterman_C
// Derives from: UCF_BaseButton_C > UCF_Base_C > UCheatFunctionBase > UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UCF_WeatherSummonWeaterman_C : public UCF_BaseButton_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UUserWidget> WeathermanWidgetClass;  // 0x02F8, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Execute();
    UFUNCTION() void ExecuteUbergraph_CF_WeatherSummonWeaterman(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_D10C360D44FF2B87793EC4969C2F7A0E(TSubclassOf<UObject> Loaded);  // parameters 0x8
};
