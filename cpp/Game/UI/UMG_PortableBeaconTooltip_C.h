// /Game/UI/UMG_PortableBeaconTooltip.UMG_PortableBeaconTooltip_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PortableBeaconTooltip_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_52;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_BeaconOwner;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_BeaconTitle;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Distance;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Portable_Beacon_C* PortableBeaconReference;  // 0x02A0, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PortableBeaconTooltip(int32 EntryPoint);  // parameters 0x4
};
