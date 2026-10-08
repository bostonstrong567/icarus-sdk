// /Game/BP/Audio/PlayerMovement/BP_LadderClimbAudioDataBase.BP_LadderClimbAudioDataBase_C
// Derives from: UPrimaryDataAsset > UDataAsset > UObject
// size 0x40, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_LadderClimbAudioDataBase_C : public UPrimaryDataAsset
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FLadderClimbAnimNotifyData> LadderNotifies;  // 0x0030, size 0x10
};
