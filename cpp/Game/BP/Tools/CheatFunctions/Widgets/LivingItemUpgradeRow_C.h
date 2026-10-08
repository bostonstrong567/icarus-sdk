// /Game/BP/Tools/CheatFunctions/Widgets/LivingItemUpgradeRow.LivingItemUpgradeRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class ULivingItemUpgradeRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name_Alteration;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemUpgradesRowHandle Upgrade;  // 0x0280, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_LivingItemUpgradeRow(int32 EntryPoint);  // parameters 0x4
};
