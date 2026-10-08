// /Game/UI/InWorld/UMG_InWorld_FishStats.UMG_InWorld_FishStats_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x268, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_InWorld_FishStats_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0260, size 0x8

    UFUNCTION(BlueprintCallable) void AddFish(FItemData Fish);  // parameters 0x1F0
};
