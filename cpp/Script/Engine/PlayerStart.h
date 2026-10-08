// /Script/Engine.PlayerStart
// Derives from: ANavigationObjectBase > AActor > UObject
// size 0x250, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerStart.h

UCLASS(Config=Engine)
class APlayerStart : public ANavigationObjectBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName PlayerStartTag;  // 0x0248, size 0x8
};
