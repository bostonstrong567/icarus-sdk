// /Script/Engine.InterpTrackInstColorProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstColorProp.h

UCLASS()
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
    UPROPERTY() FColor ResetColor;  // 0x0058, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FColor * ColorProp;  // 0x0050
};
