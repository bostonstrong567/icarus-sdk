// /Script/AIModule.BlackboardAssetProvider
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h

UCLASS(Abstract, MinimalAPI)
class UBlackboardAssetProvider : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UBlackboardData* GetBlackboardAsset() const;  // parameters 0x8
};
