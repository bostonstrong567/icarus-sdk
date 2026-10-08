// /Script/Engine.InterpGroupInst
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroupInst.h

UCLASS(MinimalAPI)
class UInterpGroupInst : public UObject
{
public:
    UPROPERTY() UInterpGroup* Group;  // 0x0028, size 0x8
    UPROPERTY() AActor* GroupActor;  // 0x0030, size 0x8
    UPROPERTY() TArray<UInterpTrackInst*> TrackInst;  // 0x0038, size 0x10

    // Virtual functions that start here:
    //   GetGroupActor, HasActor, InitGroupInst, RestoreGroupActorState, SaveGroupActorState, TermGroupInst
};
