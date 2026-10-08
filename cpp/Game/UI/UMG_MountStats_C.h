// /Game/UI/UMG_MountStats.UMG_MountStats_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x290, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MountStats_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InventoryOverlay_Cargo;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* UMG_StatTitle;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* UMG_StatTitle_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* UMG_StatTitle_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatTitle_C* UMG_StatTitle_3;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* VerticalBox_Cargo;  // 0x0288, size 0x8
};
