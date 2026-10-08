// /Game/UI/Components/FieldGuide/UMG_FieldGuideResourceHowToObtain.UMG_FieldGuideResourceHowToObtain_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideResourceHowToObtain_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Craft;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Drill;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Fishing;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Harvest;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Kill;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Mining;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ObtainIcons;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Sledgehammer;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Workshop;  // 0x02A8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideResourceHowToObtain(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Populate_HowToObtainDetail(FItemsStaticRowHandle ItemRow);  // parameters 0x18, named "Populate HowToObtainDetail"
    UFUNCTION(BlueprintCallable) void ShowIconForObtain(EFieldGuideItemHotToObtain HowToObtain);  // parameters 0x1
};
