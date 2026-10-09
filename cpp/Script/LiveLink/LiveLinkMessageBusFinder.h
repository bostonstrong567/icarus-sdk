// /Script/LiveLink.LiveLinkMessageBusFinder
// Derives from: UObject
// size 0x80, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkMessageBusFinder.h

UCLASS()
class ULiveLinkMessageBusFinder : public UObject
{
private:
    TSharedPtr<FMessageEndpoint,1> MessageEndpoint;  // 0x0028, not reflected
    TArray<FProviderPollResult,TSizedDefaultAllocator<32> > PollData;  // 0x0038, not reflected
    FGuid CurrentPollRequest;  // 0x0048, not reflected
    FWindowsCriticalSection PollDataCriticalSection;  // 0x0058, not reflected
public:
    UFUNCTION(BlueprintCallable) static void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static ULiveLinkMessageBusFinder* ConstructMessageBusFinder();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetAvailableProviders(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders);  // parameters 0x38
};
