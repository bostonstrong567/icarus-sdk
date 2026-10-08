// /Script/NavigationSystem.NavigationGraphNodeComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x220, declared in Engine/Source/Runtime/NavigationSystem/Public/NavGraph/NavigationGraphNodeComponent.h

UCLASS(MinimalAPI, Config=Engine)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
    UPROPERTY() FNavGraphNode Node;  // 0x01F8, size 0x18
    UPROPERTY(Instanced) UNavigationGraphNodeComponent* NextNodeComponent;  // 0x0210, size 0x8
    UPROPERTY(Instanced) UNavigationGraphNodeComponent* PrevNodeComponent;  // 0x0218, size 0x8
};
