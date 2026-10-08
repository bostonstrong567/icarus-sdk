// /Script/AnimationCore.AnimationDataSourceRegistry
// Derives from: UObject
// size 0x78, declared in Engine/Source/Runtime/AnimationCore/Public/AnimationDataSource.h

UCLASS()
class UAnimationDataSourceRegistry : public UObject
{
public:
    UPROPERTY(Transient) TMap<FName, TWeakObjectPtr<UObject>> DataSources;  // 0x0028, size 0x50
};
