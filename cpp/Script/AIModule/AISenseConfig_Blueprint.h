// /Script/AIModule.AISenseConfig_Blueprint
// Derives from: UAISenseConfig > UObject
// size 0x50, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISenseConfig_Blueprint.h

UCLASS(Abstract, EditInlineNew, Config=Game)
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) TSubclassOf<UAISense_Blueprint> Implementation;  // 0x0048, size 0x8
};
