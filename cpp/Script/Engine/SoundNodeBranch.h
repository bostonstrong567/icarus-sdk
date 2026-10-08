// /Script/Engine.SoundNodeBranch
// Derives from: USoundNode > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeBranch.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeBranch : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) FName BoolParameterName;  // 0x0048, size 0x8
};
