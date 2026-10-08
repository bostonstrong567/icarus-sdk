// /Game/UI/UMG_MigrationProgress.UMG_MigrationProgress_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MigrationProgress_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MigrationState;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MigrationText;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UOfflineAccountMigrator* OfflineAccountMigratorTest;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetMigrationStateText();  // parameters 0x18
};
