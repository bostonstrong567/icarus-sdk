// /Script/AIModule.AISenseConfig_Damage
// Derives from: UAISenseConfig > UObject
// size 0x50, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISenseConfig_Damage.h

UCLASS(EditInlineNew, Config=Game)
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) TSubclassOf<UAISense_Damage> Implementation;  // 0x0048, size 0x8
};
