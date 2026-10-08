// /Game/UI/Windows/UMG_MissionSpecialRewards.UMG_MissionSpecialRewards_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionSpecialRewards_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Content;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Row_Handle;  // 0x0268, size 0x18, named "Row Handle"

    UFUNCTION(BlueprintCallable) void Setup(FFactionMissionsRowHandle RowHandle);  // parameters 0x18
};
