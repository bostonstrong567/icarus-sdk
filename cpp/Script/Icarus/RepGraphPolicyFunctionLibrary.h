// /Script/Icarus.RepGraphPolicyFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Online/RepGraphPolicyFunctionLibrary.h

UCLASS()
class URepGraphPolicyFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static TSoftClassPtr<AActor> GetPolicyClassSoftPtr(const FRepGraphClassPolicy& Policy);  // parameters 0x98
};
