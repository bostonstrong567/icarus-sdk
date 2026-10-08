// /Script/Engine.InterpTrackInstVectorProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstVectorProp.h

UCLASS()
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
    UPROPERTY() FVector ResetVector;  // 0x0058, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    FVector * VectorProp;  // 0x0050
};
