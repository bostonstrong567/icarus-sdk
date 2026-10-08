// /Script/Icarus.FishBoardController
// Derives from: AIcarusActor > AActor > UObject
// size 0x2F0, declared in Icarus/Source/Icarus/Systems/Fishing/FishBoardController.h

UCLASS(Config=Engine)
class AFishBoardController : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FFishBoardRecord> Length_Scores;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<FFishBoardRecord> Weight_Scores;  // 0x02D0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnFishBoardScoresUpdated OnScoresUpdated;  // 0x02E0, size 0x10

    UFUNCTION(NetMulticast, BlueprintNativeEvent) void NotifyScoresUpdated();
    UFUNCTION(BlueprintCallable) void UpdateFakeScore(FString FakeName, FString FakeFish, int32 FakeValue, bool Weight);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void UpdateScore(APlayerController* Player, FItemData Item);  // parameters 0x1F8

    // Virtual functions that start here:
    //   NotifyScoresUpdated_Implementation
};
