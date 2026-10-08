// /Script/Engine.InterpTrackDirector
// Derives from: UInterpTrack > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackDirector.h

UCLASS(MinimalAPI)
class UInterpTrackDirector : public UInterpTrack
{
public:
    UPROPERTY() TArray<FDirectorTrackCut> CutTrack;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) uint8 bSimulateCameraCutsOnClients : 1;  // 0x0080, mask 0x01
};
