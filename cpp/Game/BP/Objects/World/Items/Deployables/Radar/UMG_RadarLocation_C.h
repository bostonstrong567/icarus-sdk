// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarLocation.UMG_RadarLocation_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarLocation_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_84;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Radar_C* LinkedRadar;  // 0x0270, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_RadarLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
