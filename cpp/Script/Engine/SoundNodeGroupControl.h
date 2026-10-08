// /Script/Engine.SoundNodeGroupControl
// Derives from: USoundNode > UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeGroupControl.h

UCLASS(EditInlineNew, MinimalAPI)
class USoundNodeGroupControl : public USoundNode
{
public:
    UPROPERTY(EditAnywhere) TArray<int32> GroupSizes;  // 0x0048, size 0x10
};
