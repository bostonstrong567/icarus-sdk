// /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Derives from: UCommandlet > UObject
// size 0xA0, declared in Engine/Plugins/Compression/OodleNetwork/Source/Classes/OodleNetworkTrainerCommandlet.h

UCLASS(Transient, Config=Editor)
class UOodleNetworkTrainerCommandlet : public UCommandlet
{
public:
    UPROPERTY(Config) bool bCompressionTest;  // 0x0080, size 0x1
    UPROPERTY(Config) int32 HashTableSize;  // 0x0084, size 0x4
    UPROPERTY(Config) int32 DictionarySize;  // 0x0088, size 0x4
    UPROPERTY(Config) int32 DictionaryTrials;  // 0x008C, size 0x4
    UPROPERTY(Config) int32 TrialRandomness;  // 0x0090, size 0x4
    UPROPERTY(Config) int32 TrialGenerations;  // 0x0094, size 0x4
    UPROPERTY(Config) bool bNoTrials;  // 0x0098, size 0x1
};
