DELEGATE() void LeaderboardQueryRecordsResult(const TArray<FLeaderboardsRecordData>& Records);  // parameters 0x10
DELEGATE() void LeaderboardQueryScoresResult(const TArray<FLeaderboardsScoreData>& Scores);  // parameters 0x10
DELEGATE() void OnGetStatsEventSignature(const TArray<FStatData>& Stats);  // parameters 0x10
DELEGATE() void OnQueryLeaderboardDefinitionsEventSignature(const TArray<FLeaderboardDef>& LeaderboardDefs);  // parameters 0x10
