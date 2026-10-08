// /Script/Engine.InterpTrackBoolProp
// Derives from: UInterpTrack > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackBoolProp.h

UCLASS(MinimalAPI)
class UInterpTrackBoolProp : public UInterpTrack
{
public:
    UPROPERTY() TArray<FBoolTrackKey> BoolTrack;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) FName PropertyName;  // 0x0080, size 0x8
};
