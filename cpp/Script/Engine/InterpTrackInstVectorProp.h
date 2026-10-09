// /Script/Engine.InterpTrackInstVectorProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstVectorProp.h

UCLASS()
class UInterpTrackInstVectorProp : public UInterpTrackInstProperty
{
public:
    FVector * VectorProp;  // 0x0050, not reflected
    UPROPERTY() FVector ResetVector;  // 0x0058, size 0xC
};
