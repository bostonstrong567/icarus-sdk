// /Game/UI/Windows/BioLab/UMG_BioLab_ShopItem_Slot.UMG_BioLab_ShopItem_Slot_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x271, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_ShopItem_Slot_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LockImage;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Locked;  // 0x0270, size 0x1

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_ShopItem_Slot(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
