// /Script/AIModule.BTTask_PlaySound
// Derives from: UBTTaskNode > UBTNode > UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_PlaySound.h

UCLASS()
class UBTTask_PlaySound : public UBTTaskNode
{
public:
    UPROPERTY(EditAnywhere) USoundCue* SoundToPlay;  // 0x0070, size 0x8
};
