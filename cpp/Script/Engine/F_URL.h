// /Script/Engine.URL
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineBaseTypes.h

USTRUCT()
struct FURL
{
public:
    UPROPERTY() FString Protocol;  // 0x0000, size 0x10
    UPROPERTY() FString Host;  // 0x0010, size 0x10
    UPROPERTY() int32 Port;  // 0x0020, size 0x4
    UPROPERTY() int32 Valid;  // 0x0024, size 0x4
    UPROPERTY() FString Map;  // 0x0028, size 0x10
    UPROPERTY() FString RedirectURL;  // 0x0038, size 0x10
    UPROPERTY() TArray<FString> Op;  // 0x0048, size 0x10
    UPROPERTY() FString Portal;  // 0x0058, size 0x10
};
