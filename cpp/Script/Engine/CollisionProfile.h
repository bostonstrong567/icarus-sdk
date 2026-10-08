// /Script/Engine.CollisionProfile
// Derives from: UDeveloperSettings > UObject
// size 0x170, declared in Engine/Source/Runtime/Engine/Classes/Engine/CollisionProfile.h

UCLASS(MinimalAPI, Config=Engine)
class UCollisionProfile : public UDeveloperSettings
{
public:
    UPROPERTY(Config) TArray<FCollisionResponseTemplate> Profiles;  // 0x0038, size 0x10
    UPROPERTY(Config) TArray<FCustomChannelSetup> DefaultChannelResponses;  // 0x0048, size 0x10
    UPROPERTY(Config) TArray<FCustomProfile> EditProfiles;  // 0x0058, size 0x10
    UPROPERTY(Config) TArray<FRedirector> ProfileRedirects;  // 0x0068, size 0x10
    UPROPERTY(Config) TArray<FRedirector> CollisionChannelRedirects;  // 0x0078, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(UCollisionProfile *),FDefaultDelegateUserPolicy> OnLoadProfileConfig;  // 0x0088
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > ProfileRedirectsMap;  // 0x00A0, private
    TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0> > CollisionChannelRedirectsMap;  // 0x00F0, private
    TArray<FName,TSizedDefaultAllocator<32> > ChannelDisplayNames;  // 0x0140, private
    TArray<enum ECollisionChannel,TSizedDefaultAllocator<32> > ObjectTypeMapping;  // 0x0150, private
    TArray<enum ECollisionChannel,TSizedDefaultAllocator<32> > TraceTypeMapping;  // 0x0160, private
};
