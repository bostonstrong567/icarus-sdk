// /Game/BP/Tools/CheatFunctions/Widgets/ProspectForecastRow.ProspectForecastRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UProspectForecastRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ProspectForecastName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectForecastEnum ProspectForecast;  // 0x0288, size 0x10

    UFUNCTION() void ExecuteUbergraph_ProspectForecastRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetProspectForecast(FProspectForecastEnum NewProspectForecast);  // parameters 0x10
};
