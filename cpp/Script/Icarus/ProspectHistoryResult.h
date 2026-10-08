// /Script/Icarus.ProspectHistoryResult
// Derives from: UObject
// size 0x108, declared in Icarus/Source/Icarus/Session/SessionTypes.h

UCLASS()
class UProspectHistoryResult : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAssociatedProspectInfo AssociatedProspectInfo;  // 0x0028, size 0xD8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UIcarusSessionResult* SessionResult;  // 0x0100, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) ELastProspectHostType GetHostType();  // parameters 0x1
    UFUNCTION(BlueprintCallable) FProspectInfo GetProspectInfo();  // parameters 0xA0
    UFUNCTION(BlueprintCallable) bool IsAvailable();  // parameters 0x1
};
