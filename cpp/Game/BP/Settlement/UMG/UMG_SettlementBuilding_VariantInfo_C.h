// /Game/BP/Settlement/UMG/UMG_SettlementBuilding_VariantInfo.UMG_SettlementBuilding_VariantInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettlementBuilding_VariantInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_RecipeInputs;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_100;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Frame;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* StatList;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Cost;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Stats;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementBuildingsRowHandle SettlementBuilding;  // 0x02B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ASettlement* NearbySettlement;  // 0x02C8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SettlementBuilding_VariantInfo(int32 EntryPoint);  // parameters 0x4
};
