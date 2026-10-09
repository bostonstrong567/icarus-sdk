// /Script/AIModule.BlackboardData
// Derives from: UDataAsset > UObject
// size 0x50, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h

UCLASS()
class UBlackboardData : public UDataAsset
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) UBlackboardData* Parent;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) TArray<FBlackboardEntry> Keys;  // 0x0038, size 0x10
protected:
    uint8 FirstKeyID;  // 0x004C, not reflected
private:
    UPROPERTY() uint8 bHasSynchronizedKeys : 1;  // 0x0048, mask 0x01
};
