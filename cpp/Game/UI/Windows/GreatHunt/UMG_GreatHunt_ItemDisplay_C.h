// /Game/UI/Windows/GreatHunt/UMG_GreatHunt_ItemDisplay.UMG_GreatHunt_ItemDisplay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GreatHunt_ItemDisplay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Item;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemDescription;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pointer;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ItemNameText;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ItemDescriptionText;  // 0x02A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* Texture;  // 0x02B8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_GreatHunt_ItemDisplay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
