// /Script/Engine.PlatformInterfaceWebResponse
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Engine/PlatformInterfaceWebResponse.h

UCLASS(Transient, MinimalAPI)
class UPlatformInterfaceWebResponse : public UObject
{
public:
    UPROPERTY() FString OriginalURL;  // 0x0028, size 0x10
    UPROPERTY() int32 ResponseCode;  // 0x0038, size 0x4
    UPROPERTY() int32 Tag;  // 0x003C, size 0x4
    UPROPERTY() FString StringResponse;  // 0x0040, size 0x10
    UPROPERTY() TArray<uint8> BinaryResponse;  // 0x0050, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0> > Headers;  // 0x0060

    UFUNCTION() void GetHeader(int32 HeaderIndex, FString& Header, FString& Value);  // parameters 0x28
    UFUNCTION() FString GetHeaderValue(FString HeaderName);  // parameters 0x20
    UFUNCTION() int32 GetNumHeaders();  // parameters 0x4

    // Virtual functions that start here:
    //   GetHeader, GetHeaderValue, GetNumHeaders
};
