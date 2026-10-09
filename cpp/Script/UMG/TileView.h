// /Script/UMG.TileView
// Derives from: UListView > UListViewBase > UWidget > UVisual > UObject
// size 0x388, declared in Engine/Source/Runtime/UMG/Public/Components/TileView.h

UCLASS()
class UTileView : public UListView
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) float EntryHeight;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere) float EntryWidth;  // 0x036C, size 0x4
    UPROPERTY(EditAnywhere) EListItemAlignment TileAlignment;  // 0x0370, size 0x1
    UPROPERTY(EditAnywhere) bool bWrapHorizontalNavigation;  // 0x0371, size 0x1
    TSharedPtr<STileView<UObject *>,0> MyTileView;  // 0x0378, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEntryHeight() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEntryWidth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEntryHeight(float NewHeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEntryWidth(float NewWidth);  // parameters 0x4
};
