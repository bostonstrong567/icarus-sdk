// /Script/LiveLink.LiveLinkMessageBusFinder
// Derives from: UObject
// size 0x80, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLink/Public/LiveLinkMessageBusFinder.h

UCLASS()
class ULiveLinkMessageBusFinder : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FMessageEndpoint,1> MessageEndpoint;  // 0x0028, private
    TArray<FProviderPollResult,TSizedDefaultAllocator<32> > PollData;  // 0x0038, private
    FGuid CurrentPollRequest;  // 0x0048, private
    FWindowsCriticalSection PollDataCriticalSection;  // 0x0058, private

    UFUNCTION(BlueprintCallable) static void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static ULiveLinkMessageBusFinder* ConstructMessageBusFinder();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetAvailableProviders(UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders);  // parameters 0x38
};
