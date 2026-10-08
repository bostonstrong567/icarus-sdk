// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarInterface.UMG_RadarInterface_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarInterface_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* ProgressBar_Scan;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Radar;  // 0x0270, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_RadarInterface(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateRadarInterfaceText(TEnumAsByte<ERadarInterfaceText> Selection);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateScanProgressBar(float Percent);  // parameters 0x4
};
