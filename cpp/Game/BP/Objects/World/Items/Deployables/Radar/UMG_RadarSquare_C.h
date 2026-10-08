// /Game/BP/Objects/World/Items/Deployables/Radar/UMG_RadarSquare.UMG_RadarSquare_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2B1, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RadarSquare_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* IconImage;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* IconScaleBox;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WorldSpaceCenter;  // 0x0298, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector WorldSpaceSize;  // 0x02A4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMapTileRadarFlag RadarTileFlag;  // 0x02B0, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RadarSquare(int32 EntryPoint);  // parameters 0x4
};
