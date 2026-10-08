// /Script/Engine.InterpTrackInstLinearColorProp
// Derives from: UInterpTrackInstProperty > UInterpTrackInst > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstLinearColorProp.h

UCLASS()
class UInterpTrackInstLinearColorProp : public UInterpTrackInstProperty
{
public:
    UPROPERTY() FLinearColor ResetColor;  // 0x0058, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FLinearColor * ColorProp;  // 0x0050
};
