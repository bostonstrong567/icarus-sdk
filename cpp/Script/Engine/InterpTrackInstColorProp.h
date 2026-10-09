// /Script/Engine.InterpTrackInstColorProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstColorProp.h

UCLASS()
class UInterpTrackInstColorProp : public UInterpTrackInstProperty
{
public:
    FColor * ColorProp;  // 0x0050, not reflected
    UPROPERTY() FColor ResetColor;  // 0x0058, size 0x4
};
